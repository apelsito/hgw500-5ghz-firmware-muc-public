/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014dda0 */

void FUN_ram_0014dda0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x52c);
  if (cVar1 == '\0') {
    return;
  }
  if (param_2 == *(byte *)(param_1 + 0x664)) {
    return;
  }
  if ((DAT_ram_0018c240 == 0xff) || (param_2 = DAT_ram_0018c240 & 0xff, DAT_ram_8002c8bd != '\x03'))
  {
    if (param_2 != 0x12) goto LAB_ram_0014de2c;
  }
  else {
    FUN_ram_000ee260(s_PSEL__Overriding_with_fixed_matr_ram_001c6b04,param_2);
    if (param_2 != 0x12) {
      cVar1 = *(char *)(param_1 + 0x52c);
LAB_ram_0014de2c:
      FUN_ram_000e4bd8(cVar1,param_2);
      iVar4 = (uint)*(byte *)(param_1 + 0x52c) * 0x100;
      iVar2 = iVar4 + 0xf600;
      iVar3 = iVar4 + 0xf640;
      *(int *)(param_1 + 0x4ec) = iVar2;
      *(int *)(param_1 + 0x4f4) = iVar2;
      iVar4 = iVar4 + 0xf680;
      *(int *)(param_1 + 0x4f8) = iVar3;
      goto LAB_ram_0014de8c;
    }
  }
  iVar2 = 0xf500;
  *(undefined4 *)(param_1 + 0x4f4) = 0xf500;
  iVar3 = 0xf540;
  *(undefined4 *)(param_1 + 0x4f8) = 0xf540;
  iVar4 = 0xf580;
LAB_ram_0014de8c:
  *(int *)(param_1 + 0x4fc) = iVar4;
  *(undefined4 *)(param_1 + 0x500) = 0xf5c0;
  *(undefined1 *)(param_1 + 0x4eb) = 1;
  *(char *)(param_1 + 0x664) = (char)param_2;
  if (DAT_ram_8002c8bd == '\x03') {
    FUN_ram_000ee260(s_PSEL__Set_matrix_index__u_ss1__x_ram_001c6b2c,param_2,iVar2,iVar3);
  }
  return;
}


