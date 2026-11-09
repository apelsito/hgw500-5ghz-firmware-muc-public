/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011eb70 */

void FUN_ram_0011eb70(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_ram_000ee260(s_channel_pwr_80M_pwr_40M_pwr_20M_ram_001c2f70);
  iVar3 = 0;
  iVar5 = 0x28;
  do {
    uVar1 = (uint)(byte)(&DAT_ram_0018d37c)[iVar3];
    iVar4 = uVar1 * 0x34 + param_1 + 0x47c;
    iVar6 = 0;
    while( true ) {
      iVar2 = iVar6 * 0xc;
      iVar7 = 3;
      FUN_ram_000ee260(s__d__d__d__d_ram_001c2f98,uVar1,(int)*(char *)(iVar4 + iVar2 + 0x10),
                       (int)*(char *)(iVar4 + iVar2 + 0xf),(int)*(char *)(iVar4 + iVar2 + 0xe));
      do {
        iVar2 = iVar2 + 3;
        FUN_ram_000ee260(s__d__d__d__d_ram_001c2f98,(&DAT_ram_0018d37c)[iVar3],
                         (int)*(char *)(iVar4 + iVar2 + 0x10),(int)*(char *)(iVar4 + iVar2 + 0xf),
                         (int)*(char *)(iVar4 + iVar2 + 0xe));
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar6 = iVar6 + 1;
      if (1 < iVar6) break;
      uVar1 = (uint)(byte)(&DAT_ram_0018d37c)[iVar3];
    }
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar5 != 0);
  return;
}


