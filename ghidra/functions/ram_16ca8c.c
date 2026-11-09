/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016ca8c */

undefined4
FUN_ram_0016ca8c(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,ushort param_9,
                ushort param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)*param_1;
  iVar4 = *(int *)(param_1[4] + 0x3b20);
  *puVar3 = 0x1a081128;
  if (DAT_ram_0018c328 == 1) {
    *puVar3 = 0x1a0a3128;
    DAT_ram_00193bd9 = 0x41;
    uVar1 = CONCAT13(DAT_ram_00193be1,
                     CONCAT12(DAT_ram_00193be0,CONCAT11(DAT_ram_00193bdf,DAT_ram_00193bde)));
    *(uint *)(*(int *)(iVar4 + 0xc) + 0x3020) =
         (uint)DAT_ram_00193bdc << 0x10 | 0x41 | (uint)DAT_ram_00193bdd << 0x18;
    *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x3024) = uVar1;
  }
  puVar3[3] = &DAT_ram_00193bd8;
  puVar3[4] = 0;
  puVar3[1] = param_5 * 100;
  puVar3[2] = 0x1f0000;
  puVar3[5] = param_5 * 100;
  if ((param_4 & 3) == 0) {
    puVar3[1] = param_5 * 10;
    puVar3[5] = param_5 * 10;
  }
  puVar3[6] = 0x5422;
  uVar1 = param_1[2];
  puVar3[7] = 0x400;
  puVar3[8] = uVar1;
  if (DAT_ram_0018c328 == 0) {
    puVar3[9] = 0;
    puVar3[10] = 0;
  }
  else {
    puVar3[9] = param_8;
    puVar3[10] = (uint)param_9;
  }
  puVar3[0xb] = puVar3 + 0x13;
  uVar2 = (uint)DAT_ram_0018c32c;
  puVar3[0xd] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0xc] = (uVar2 & 0xc) << 0x17 | (uVar2 & 3) << 0x11 | (param_10 & 7) << 8 | 0x180000;
  puVar3[0x10] = 0;
  FUN_ram_00180224(param_2 & 0xf,param_3,param_4,param_6);
  uVar1 = FUN_ram_00183c8c();
  FUN_ram_00180128(param_2 & 0xf);
  FUN_ram_0017f0e8(param_2 & 0xf);
  if (DAT_ram_0018c010 != 3) {
    FUN_ram_0016ee0c();
    FUN_ram_0016e5f8();
  }
  FUN_ram_00183cd0(uVar1);
  FUN_ram_0016c788(puVar3 + 0x13,param_4,param_6,param_3,*(undefined4 *)(iVar4 + 0x1fc));
  return 1;
}


