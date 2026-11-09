/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00151f5c */

void FUN_ram_00151f5c(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = 4;
  if (DAT_ram_00192d34 < DAT_ram_00192d38) {
    uVar3 = DAT_ram_00192d64;
    if (DAT_ram_00192d68 <= DAT_ram_00192d34) goto LAB_ram_00151fa4;
  }
  else if (DAT_ram_00192d48 != 0) {
    uVar3 = 0;
    goto LAB_ram_00151fa4;
  }
  uVar3 = 4;
LAB_ram_00151fa4:
  if (DAT_ram_00192d34 < DAT_ram_00192d38) {
    if (DAT_ram_00192d70 <= DAT_ram_00192d34) {
      uVar2 = DAT_ram_00192d6c;
    }
  }
  else if (DAT_ram_00192d48 != 0) {
    uVar2 = 0;
  }
  bVar4 = (int)uVar3 < 0;
  if (bVar4) {
    uVar3 = 0;
  }
  if (!bVar4 && 3 < (int)uVar3) {
    uVar3 = 4;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (3 < (int)uVar2) {
    uVar2 = 4;
  }
  if (*(byte *)(param_1 + 0x3b36) == uVar3) {
    bVar1 = *(byte *)(param_1 + 0x3b37);
  }
  else {
    FUN_ram_00151e58(param_1,(uint)*(byte *)(param_1 + 0x3b36),uVar3,&DAT_ram_001aa2fc,
                     &DAT_ram_0020fdc0,&DAT_ram_001aa3bc,&DAT_ram_001c700c);
    bVar1 = *(byte *)(param_1 + 0x3b37);
    *(char *)(param_1 + 0x3b36) = (char)uVar3;
  }
  if (uVar2 != bVar1) {
    FUN_ram_00151e58(param_1,(uint)bVar1,uVar2,&DAT_ram_001aa35c,&DAT_ram_0020fde0,&DAT_ram_001aa3dc
                     ,&DAT_ram_001c7010);
    *(char *)(param_1 + 0x3b37) = (char)uVar2;
  }
  return;
}


