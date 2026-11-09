/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017bf30 */

void FUN_ram_0017bf30(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1 = param_1 * 2;
  iVar5 = param_1 + 2;
  if (DAT_ram_0018c2f8 == &UNK_auxregs_0709) {
    FUN_ram_000f4d18(DAT_ram_0018c2d4,4,(uint)DAT_ram_0018c362 * 0xc0,0xc0,&DAT_ram_002119f0);
  }
  for (; param_1 < iVar5; param_1 = param_1 + 1) {
    iVar6 = 0;
    do {
      iVar2 = param_1 * 0x1c0 + iVar6 * 0x38;
      piVar3 = &DAT_ram_00210e70 + iVar6 * 0xe + param_1 * 0x70;
      *piVar3 = 0;
      (&DAT_ram_00210e74)[iVar6 * 0xe + param_1 * 0x70] = 0;
      (&DAT_ram_00210e78)[iVar6 * 0xe + param_1 * 0x70] = 0;
      (&DAT_ram_00210e7c)[iVar6 * 0xe + param_1 * 0x70] = 0;
      *(undefined4 *)(&DAT_ram_00210e80 + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210e84 + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210e88 + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210e8c + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210e90 + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210e94 + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210e98 + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210e9c + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210ea0 + iVar2) = 0;
      *(undefined4 *)(&DAT_ram_00210ea4 + iVar2) = 0;
      iVar4 = iVar6 * 6;
      sVar1 = *(short *)(&DAT_ram_002119f0 + iVar4 + param_1 * 0x30);
      (&DAT_ram_00210e70)[param_1 * 0x70 + iVar6 * 0xe + 6] =
           (int)*(short *)(&DAT_ram_002119f0 + iVar4 + param_1 * 0x30 + 2);
      (&DAT_ram_00210e70)[param_1 * 0x70 + iVar6 * 0xe + 7] = (int)sVar1;
      iVar4 = *(short *)(&DAT_ram_002119f0 + iVar4 + param_1 * 0x30 + 4) * 0x1c;
      *piVar3 = *piVar3 + *(int *)(&DAT_ram_0019b4f0 + iVar4) * 0x1000;
      (&DAT_ram_00210e78)[iVar6 * 0xe + param_1 * 0x70] =
           (&DAT_ram_00210e78)[iVar6 * 0xe + param_1 * 0x70] +
           *(int *)(&DAT_ram_0019b4f4 + iVar4) * 0x1000;
      *(int *)(&DAT_ram_00210e80 + iVar2) =
           *(int *)(&DAT_ram_00210e80 + iVar2) + *(int *)(&DAT_ram_0019b4f8 + iVar4) * 0x1000;
      *(int *)(&DAT_ram_00210e88 + iVar2) =
           *(int *)(&DAT_ram_00210e88 + iVar2) + *(int *)(&DAT_ram_0019b4fc + iVar4) * 0x1000;
      *(int *)(&DAT_ram_00210e90 + iVar2) =
           *(int *)(&DAT_ram_00210e90 + iVar2) + *(int *)(&DAT_ram_0019b500 + iVar4) * 0x1000;
      *(int *)(&DAT_ram_00210e98 + iVar2) =
           *(int *)(&DAT_ram_00210e98 + iVar2) + *(int *)(&DAT_ram_0019b504 + iVar4) * 0x1000;
      *(int *)(&DAT_ram_00210ea0 + iVar2) =
           *(int *)(&DAT_ram_00210ea0 + iVar2) + *(int *)(&DAT_ram_0019b508 + iVar4) * 0x1000;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
  }
  return;
}


