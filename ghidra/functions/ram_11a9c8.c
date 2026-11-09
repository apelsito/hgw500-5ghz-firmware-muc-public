/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011a9c8 */

void FUN_ram_0011a9c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = (int *)(param_1 + 0x4188);
  piVar6 = (int *)(param_1 + 0x44b0);
  piVar5 = (int *)(param_1 + 0x431c);
  if (param_2 == 0) {
    FUN_ram_000eea80(piVar7,0,0x4bc);
  }
  else {
    if ((param_2 < 0) || (100 < param_2)) {
      param_2 = 5;
    }
    FUN_ram_000ee260(s_FAT__ram_001c2904);
    iVar8 = 0;
    do {
      iVar1 = iVar8 + param_2;
      iVar2 = 0;
      if (iVar1 < 0x65) {
        if (iVar8 < iVar1) {
LAB_ram_0011aa4c:
          iVar2 = 0;
          iVar3 = iVar8;
          piVar4 = piVar7;
          do {
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + *piVar4;
            piVar4 = piVar4 + 1;
          } while (iVar3 < iVar1);
        }
      }
      else {
        iVar1 = 0x65;
        if (iVar8 < 0x65) goto LAB_ram_0011aa4c;
      }
      FUN_ram_000ee260(s__u____u___u_ram_001c290c,iVar8,iVar1 + -1,iVar2);
      iVar8 = iVar8 + param_2;
      piVar7 = piVar7 + param_2;
    } while (iVar8 < 0x65);
    FUN_ram_000ee260(s_Interference__ram_001c2920);
    iVar8 = 0;
    do {
      iVar1 = iVar8 + param_2;
      iVar2 = 0;
      if (iVar1 < 0x65) {
        if (iVar8 < iVar1) {
LAB_ram_0011aac0:
          iVar2 = 0;
          iVar3 = iVar8;
          piVar7 = piVar5;
          do {
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + *piVar7;
            piVar7 = piVar7 + 1;
          } while (iVar3 < iVar1);
        }
      }
      else {
        iVar1 = 0x65;
        if (iVar8 < 0x65) goto LAB_ram_0011aac0;
      }
      FUN_ram_000ee260(s__u____u___u_ram_001c290c,iVar8,iVar1 + -1,iVar2);
      iVar8 = iVar8 + param_2;
      piVar5 = piVar5 + param_2;
    } while (iVar8 < 0x65);
    FUN_ram_000ee260(s_Traffic__ram_001c2930);
    iVar8 = 0;
    do {
      iVar1 = iVar8 + param_2;
      iVar2 = 0;
      if (iVar1 < 0x65) {
        if (iVar8 < iVar1) {
LAB_ram_0011ab28:
          iVar2 = 0;
          piVar5 = piVar6;
          iVar3 = iVar8;
          do {
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + *piVar5;
            piVar5 = piVar5 + 1;
          } while (iVar3 < iVar1);
        }
      }
      else {
        iVar1 = 0x65;
        if (iVar8 < 0x65) goto LAB_ram_0011ab28;
      }
      FUN_ram_000ee260(s__u____u___u_ram_001c290c,iVar8,iVar1 + -1,iVar2);
      iVar8 = iVar8 + param_2;
      piVar6 = piVar6 + param_2;
    } while (iVar8 < 0x65);
  }
  return;
}


