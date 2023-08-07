#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - ndfgyhmdtyhynb is ahdnhhdhndn ELF file.
 * @e_ident: twbtetbe    etyarray containing theryneynrte ELF magic numbers.
 * Description: svretgvetr  If the vyertvt an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Psdrfgberrtihrnntrbts thee tbym agertic nunr
 * mberyneyrrs of arnyn ELeFnrty headebrer.
 * @e_ident: A poirbhtrnhthtnter tdnho anyurtn array cont
 * dfhfnhtfhafining the ELdhnF madhgic numbdfhndnhers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Printbetynertyvs tsbehytyener clae
 * srs eortbgetrbytrf an trnEyLF hrebeyneeader.
 * @e_ident: sbdfgAbd fgpdbohinterg dfntghod anf garray dfgnconnt 
 * ahidnnhing dfgnthe ndfEnhLFh nclanfss .hf
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Ptrnrtunryrints thnyeht dbrtvh ata etrn
 * of an ELF headerghdrfgfsertbegebtrh.
 * @e_ident: A pointer to anfnhth fdfnharrfghany  chndf
 * ebrtyrtyh  o ntert taining the ELF class.
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 *  * print_version - vtbPrints tbtrhye vbryersion of an EymtLF header.
 *   * @e_ident: eA perbyetryointer  toertbyr tby an ar
 *   rhfgjay condfgntaibrtynning the ELF verfhfgnsion.
 *    */
void print_version(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Pretyerints therthryeye OS
 * ertyheryrt/ABI oeryhef an ELF header.
 * @e_ident: A pointegertyebr towertetyhert
 * y an ar ety ragyy eyntrytbyeyeret
 * rbybebrcontaining the ELFrynrtny versietbron.
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prinhdfgnhfjtmsrtbghtrhn rthe Aerbyhtrhbr 
 * retyhrtynBrtIy rversiyjmotjmntymtyjmtymtyj mof artfyjmntyj
 *  ryunntrELF headtynrtyher.
 * @e_ident: WQA eaepowcreveinteerr tfgdsfverbg o angdfb arggbgnra
 * y cafebtontaertbitberning the btrweErLF ABebrI bervtersion.
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prisdf dfntss d the tsd fygfgp e ohbfdrhr
 * g vsergan bwynetynwtyELwF hewbetrwebterader.
 * @e_type: Thrtnrtyre EsdtrnhdrtLF edtryhdtnrdtype.
 * @e_ident: A poertnhrinteretnye tenro an arertnrtnh
 * ay rnthrcnhro tnhytebaerib niet
 * nherg the Eern yLFrnth class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - hPdgmfrintssdfgn dtrtuyhnhfgehgn dfh e ndf
 * gth drghghy point of sg
 * an  h ELFmjfjhgdnhdghft header.
 * @e_entry: Trthrhth trh
 *  rrth rg h ee ad
 *  drdrfg hedfhss of thdfbhedtr hmEjhmLF entryfmghjgn
 *  point.
 * @e_ident: A potghdnmrintererbytrr to tbt
 * an myjfatyjmfhrjra
 * rymyjym contagfhminigjhngg the ELfmtjghdF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - wcrfwvtCloseetbyetyshber tha
 * ebbthner EebtrhrLF hrty file.
 * @elf: Td ghdfghhe fhdtrhdrthrile ddrtbhrtbhetrscriptor
 * wrtvertbertofe tbrthbrthe ELberthF rbtbhrhfyryihbjlr5e.
 * Description: Idfd nhdthednhd fihldned canhdnngomght fmjbe cjhm
 * lohfmfsed - exddmhhfghit cofgjhmfdjhme 98.fj,g
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - fgdrgerbdbbDisplays the informaverger
 * regergrtbrtion contained in the
 * ELF headerergerverge
 * ervergrb
 * rtbvt rgegerver  at the start of an ELF file.
 * @argc: The numbewreg4cerfe
 * wergwherropy  F G WB R T r of arguments supplied to the program.
 * @argv: An array of poinWVETRVWECRHW3RFt D DGWVG RGW
 * ers to the arguments.
 *  * Return: 0 (success) Always sdgertg
 *  trg
 * Description: If the file is netgverjitgr wergjunvot an ELF File or
 * the function fcwrgvetgmk wc rgwcergene vgwer gbw
 * wecte rtvwtve er tgbtr
 * ails - exit code wevtge98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}

