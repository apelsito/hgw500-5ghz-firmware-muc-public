/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb300 */

void FUN_ram_000fb300(int param_1,byte *param_2,undefined4 param_3,undefined1 *param_4,
                     undefined4 param_5,int param_6,int param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  FUN_ram_000fb058(param_1,2,param_5,param_3,param_8);
  uVar3 = (uint)param_2[1] << 0x18 | (uint)*param_2 << 0x10 | param_6 << 0xc | param_7 << 4 | 1U;
  uVar1 = *(undefined4 *)(param_2 + 2);
  if (param_8 == 0) {
    *(uint *)(*(int *)(param_1 + 0xc) + 0x3020) = uVar3;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x3024);
  }
  else {
    *(uint *)(*(int *)(param_1 + 0xc) + 0x103020) = uVar3;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x103024);
  }
  *puVar2 = uVar1;
  *(uint *)(*(int *)(param_1 + 0xc) + (uint)(param_8 != 0) * 0x100000 + 0x3028) =
       CONCAT13(param_4[0xc],CONCAT12(param_4[0xd],CONCAT11(param_4[0xe],param_4[0xf])));
  *(uint *)(*(int *)(param_1 + 0xc) + (uint)(param_8 != 0) * 0x100000 + 0x302c) =
       CONCAT13(param_4[8],CONCAT12(param_4[9],CONCAT11(param_4[10],param_4[0xb])));
  *(uint *)(*(int *)(param_1 + 0xc) + (uint)(param_8 != 0) * 0x100000 + 0x3030) =
       CONCAT13(param_4[4],CONCAT12(param_4[5],CONCAT11(param_4[6],param_4[7])));
  *(uint *)(*(int *)(param_1 + 0xc) + (uint)(param_8 != 0) * 0x100000 + 0x3034) =
       CONCAT13(*param_4,CONCAT12(param_4[1],CONCAT11(param_4[2],param_4[3])));
  FUN_ram_000e4f98(1000,0xffffffff,puVar2,param_4 + -4);
  FUN_ram_000fb058(param_1,1,param_5,param_3,param_8);
  return;
}


