/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119394 */

undefined4
FUN_ram_00119394(int *param_1,ushort *param_2,int param_3,undefined1 param_4,char param_5,
                undefined4 param_6,undefined1 param_7)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)(param_2 + 0xe);
  iVar5 = *param_1;
  if (param_3 != 0) {
    FUN_ram_0039fe00(param_2 + 2,param_3,8);
  }
  *(undefined1 **)(param_2 + 0x34) = &LAB_ram_0011adc8;
  *(undefined1 **)(param_2 + 0x36) = &LAB_ram_0011ae2c;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  uVar1 = *(undefined1 *)(iVar5 + 0xd);
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  *(undefined1 *)((int)param_2 + 0xd) = uVar1;
  param_2[7] = param_2[7] | 0x40;
  uVar3 = param_1[10];
  *puVar4 = param_2;
  puVar4[8] = uVar3;
  iVar5 = param_1[0xb];
  puVar4[3] = param_1;
  puVar4[9] = iVar5;
  uVar2 = param_1[0xc];
  *(undefined1 *)(param_2 + 9) = param_4;
  puVar4[10] = uVar2 & 0xffffeebf;
  *(char *)(puVar4 + 0xb) = param_5;
  if ((param_5 == '\x02') || (*param_2 < 3)) {
    *(undefined1 *)(puVar4 + 4) = 0;
  }
  else {
    *(undefined1 *)(puVar4 + 4) = param_7;
  }
  if ((uVar2 & 0x10000) != 0) {
    puVar4[8] = uVar3 | 0x2000;
  }
  if ((((uint)(puVar4 + 6) & 1) == 0) && (((int)param_1 + 0x1fU & 1) == 0)) {
    *(undefined2 *)(puVar4 + 6) = *(undefined2 *)((int)param_1 + 0x1f);
    *(undefined2 *)((int)puVar4 + 0x1a) = *(undefined2 *)((int)param_1 + 0x21);
    *(undefined2 *)(puVar4 + 7) = *(undefined2 *)((int)param_1 + 0x23);
  }
  else {
    FUN_ram_0039fe00(puVar4 + 6,(int)param_1 + 0x1fU,6);
  }
  *(undefined1 *)(puVar4 + 0x10) = 0;
  puVar4[0x1c] = 0;
  *(undefined1 **)(param_2 + 0x3e) = &LAB_ram_00121ff8;
  *(undefined1 *)((int)puVar4 + 0x7f) = 1;
  *(undefined1 *)(puVar4 + 0x20) = 1;
  *(undefined1 *)((int)puVar4 + 0x81) = 2;
  return 0;
}


