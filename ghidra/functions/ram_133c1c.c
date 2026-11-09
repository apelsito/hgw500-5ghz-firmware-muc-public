/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00133c1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00133c1c(int param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *(undefined1 *)((int)param_2 + 0x8b) = param_3;
  iVar3 = *(int *)(param_1 + 0x3b20);
  uVar6 = STATUS32;
  if ((uVar6 & 6) != 0) {
    STATUS32 = uVar6 & 0xfffffff9;
  }
  _DAT_ram_8003ffcc = 0x4000007;
  _DAT_ram_8003ffd0 = DAT_ram_80038ee0;
  _DAT_ram_8003ffd4 = 0xffffffff;
  STATUS32 = uVar6;
  sync();
  DAT_ram_80037208 = DAT_ram_80037208 + 1;
  param_2[6] = 0;
  FUN_ram_00156e30(param_1,1);
  if (*(int *)(param_1 + 0x3f7c) != 0) {
    uVar6 = 0;
    do {
      FUN_ram_00102688(*(undefined4 *)(param_1 + 0x3b20),uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x3f7c));
  }
  FUN_ram_00133784(0);
  FUN_ram_001711e0(0x18,0xe0,5);
  _DAT_ram_e6000024 = 2;
  FUN_ram_000e4fa0(0x14);
  FUN_ram_0018aa18(0);
  FUN_ram_00133784(1);
  if ((*(char *)((int)param_2 + 0x8b) != '\0') && (*(char *)(param_1 + 0x465f) == '\0')) {
    DAT_ram_80037204 = DAT_ram_80037204 + 1;
    param_2[0x23] = _DAT_ram_e609114c;
    param_2[0x27] = _DAT_ram_e609115c;
    param_2[0x24] = _DAT_ram_e6091150;
    param_2[0x28] = _DAT_ram_e6091160;
    param_2[0x25] = _DAT_ram_e6091154;
    param_2[0x29] = _DAT_ram_e6091164;
    param_2[0x26] = _DAT_ram_e6091158;
    param_2[0x2a] = _DAT_ram_e6091168;
    FUN_ram_00133a98(param_2,4);
  }
  FUN_ram_0018a9f0(0xe);
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3018);
  puVar5 = param_2 + 0x15;
  param_2[7] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014);
  param_2[8] = uVar2;
  FUN_ram_00103348(*(undefined4 *)(param_1 + 0x3b20),1,param_2 + 9);
  FUN_ram_00103f88(*(undefined4 *)(param_1 + 0x3b20),1,param_2 + 0x67);
  FUN_ram_0010517c(iVar3,param_2 + 0x21);
  *(undefined1 *)((int)param_2 + 0x8a) = 0;
  uVar6 = 0;
  iVar4 = 8;
  do {
    iVar1 = FUN_ram_00105088(iVar3,uVar6 & 0xff,puVar5);
    puVar5 = (undefined4 *)((int)puVar5 + 6);
    if (iVar1 != 0) {
      *(byte *)((int)param_2 + 0x8a) = *(byte *)((int)param_2 + 0x8a) | (byte)(1 << (uVar6 & 0x1f));
    }
    iVar4 = iVar4 + -1;
    uVar6 = uVar6 + 1;
  } while (iVar4 != 0);
  param_2[5] = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x3000);
  param_2[4] = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x2000);
  param_2[1] = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x478);
  param_2[3] = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x578);
  param_2[2] = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x2028);
  *param_2 = _DAT_ram_e504404c;
  uVar2 = FUN_ram_001054ac(iVar3);
  param_2[0x2b] = uVar2;
  uVar2 = FUN_ram_001054bc(iVar3);
  param_2[0x2c] = uVar2;
  param_2[0x2d] = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x3048);
  FUN_ram_00133b08(param_1,param_2);
  param_2[0x8af] = *(uint *)(*(int *)(iVar3 + 0xc) + 0x301c) & 0x10000030;
  _DAT_ram_e5044038 = 1;
  _DAT_ram_e5144038 = 1;
  _DAT_ram_e0000004 = 0;
  sync();
  _DAT_ram_e0000000 = 0;
  sync();
  FUN_ram_000e4fa0(10);
  _DAT_ram_e0000004 = 0x100;
  sync();
  _DAT_ram_e0000000 = 0;
  sync();
  FUN_ram_000e4fa0(0x14);
  if (*(char *)((int)param_2 + 0x8b) != '\0') {
    _DAT_ram_e0000004 = 0;
    sync();
    _DAT_ram_e0000000 = 0;
    sync();
    FUN_ram_000e4fa0(10);
  }
  return;
}


