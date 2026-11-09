/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012d170 */

undefined4 FUN_ram_0012d170(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_ram_0018c1c0;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  DAT_ram_800371cc = DAT_ram_800371cc + 1;
  switch(param_2) {
  case 0:
    if (DAT_ram_0018c1bc == 0) {
      FUN_ram_000f7c10(10,param_1,0,&LAB_ram_001345e8,1);
    }
    if (iVar2 == 0) {
      FUN_ram_000f7c10(5,param_1,0,&LAB_ram_001341e8,3);
    }
    DAT_ram_0020fc94 = (uint)(DAT_ram_0020fca4 != 0);
    DAT_ram_0020fc98 = (uint)(DAT_ram_0020fca8 != 0);
    DAT_ram_0020fc9c = 0;
    DAT_ram_0020fca0 = 0;
    DAT_ram_0018c188 = 1;
    break;
  case 1:
    if (DAT_ram_0018c1bc != 0) {
      FUN_ram_000f7d60();
    }
    if (iVar2 != 0) {
      FUN_ram_000f7d60(iVar2);
    }
    DAT_ram_0018c188 = 0;
    break;
  case 2:
    if (DAT_ram_0020fca4 != 0) {
      DAT_ram_0020fca4 = DAT_ram_0020fca4 + -1;
    }
    DAT_ram_0020fc94 = (uint)(DAT_ram_0020fca4 != 0);
    break;
  case 3:
    DAT_ram_0020fca4 = DAT_ram_0020fca4 + 1;
    if (DAT_ram_0020fc94 == 0) {
      DAT_ram_0020fc94 = 1;
    }
    break;
  case 4:
    if (DAT_ram_0020fca8 != 0) {
      DAT_ram_0020fca8 = DAT_ram_0020fca8 + -1;
    }
    DAT_ram_0020fc98 = (uint)(DAT_ram_0020fca8 != 0);
    break;
  case 5:
    DAT_ram_0020fca8 = DAT_ram_0020fca8 + 1;
    if (DAT_ram_0020fc98 == 0) {
      DAT_ram_0020fc98 = 1;
    }
    break;
  case 6:
    DAT_ram_0020fca0 = DAT_ram_0020fca0 + 1;
    break;
  case 7:
    DAT_ram_0020fca0 = 0;
  }
  DAT_ram_800371d0 = DAT_ram_800371d0 + 1;
  STATUS32 = uVar1;
  return 0;
}


