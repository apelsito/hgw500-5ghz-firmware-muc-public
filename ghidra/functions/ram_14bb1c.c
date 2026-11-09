/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014bb1c */

void FUN_ram_0014bb1c(int param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  
  uVar2 = param_2 >> 0x18;
  uVar4 = (param_2 & 0xff0000) >> 0x10;
  if ((uVar2 == 0) || (uVar4 < 4)) {
    uVar5 = (undefined1)param_2;
    switch(uVar2) {
    case 0:
      cVar6 = '\0';
      iVar3 = 4;
      do {
        FUN_ram_0014b7bc(param_1,cVar6);
        cVar6 = cVar6 + '\x01';
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      break;
    case 1:
      FUN_ram_0014b7bc(param_1,uVar4);
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x5ac0 + uVar4 * 0x30) = uVar5;
      break;
    case 3:
      iVar3 = param_1 + 0x5abc + uVar4 * 0x30;
      FUN_ram_0014ba9c(iVar3 + 8,(param_2 & 0xff00) >> 8);
      FUN_ram_0014ba9c(iVar3 + 10,param_2 & 0xff);
      break;
    case 4:
      iVar3 = param_1 + 0x5abc + uVar4 * 0x30;
      FUN_ram_0014ba9c(iVar3 + 0x12,(param_2 & 0xff00) >> 8);
      FUN_ram_0014ba9c(iVar3 + 0x14,param_2 & 0xff);
      break;
    case 5:
      iVar3 = param_1 + 0x5abc + uVar4 * 0x30;
      *(ushort *)(iVar3 + 6) = (ushort)(param_2 >> 8) & 0xff;
      *(ushort *)(iVar3 + 0x10) = (ushort)param_2 & 0xff;
      break;
    case 6:
      iVar3 = param_1 + 0x5abc + uVar4 * 0x30;
      *(undefined1 *)(iVar3 + 0x17) = uVar5;
      *(char *)(iVar3 + 0x16) = (char)(param_2 >> 8);
      break;
    case 7:
      *(undefined1 *)(param_1 + 0x5ad4 + uVar4 * 0x30) = uVar5;
      break;
    default:
      pcVar1 = s_SFS__invalid_command__d_ram_001c6794;
      goto LAB_ram_0014bcc0;
    }
  }
  else {
    pcVar1 = s_SFS__invalid_feature__d_ram_001c6778;
    uVar2 = uVar4;
LAB_ram_0014bcc0:
    FUN_ram_000ee260(pcVar1,uVar2);
  }
  return;
}


