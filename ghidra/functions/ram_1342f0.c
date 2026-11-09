/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001342f0 */

void FUN_ram_001342f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1c [4];
  
  iVar3 = 100;
  while( true ) {
    DAT_ram_800371ec = DAT_ram_800371ec + 1;
    iVar1 = FUN_ram_001255a4(2,auStack_1c,s_qtn_if_qtn_xmit_c_ram_001c4440,0x1c4);
    if (iVar1 != 0) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  }
  uVar2 = FUN_ram_00134144(param_1);
  DAT_ram_800371d4 = DAT_ram_800371d4 + 1;
  if (DAT_ram_8002c8bc == '\x03') {
    *(undefined1 *)(param_1 + 0x401a) = 6;
    FUN_ram_00133c1c(param_1,&DAT_ram_0020d9d4,uVar2);
    FUN_ram_00134f70(param_1,&DAT_ram_0020d9d4,0);
  }
  FUN_ram_00125d98(2,auStack_1c,s_qtn_if_qtn_xmit_c_ram_001c4440,0x1c8);
  FUN_ram_0018b384(param_1,0);
  DAT_ram_0020fc94 = (uint)(DAT_ram_0020fca4 != 0);
  DAT_ram_0020fc98 = (uint)(DAT_ram_0020fca8 != 0);
  DAT_ram_0020fc9c = 0;
  DAT_ram_0020fca0 = 0;
  if (DAT_ram_0018c420 == 0) {
    DAT_ram_0020fc9c = 0;
    DAT_ram_0020fca0 = 0;
    return;
  }
  FUN_ram_000ee260(s_bb_hang_wdog_triggered__immediat_ram_001c4454);
  return;
}


