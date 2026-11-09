/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157784 */

void FUN_ram_00157784(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  int local_24;
  undefined2 local_20;
  
  piVar4 = &local_24;
  puVar8 = (undefined2 *)*param_1;
  piVar7 = *(int **)(*param_2 + 0x38);
  uVar10 = (uint)*(byte *)(*param_2 + 0x10);
  iVar1 = FUN_ram_00155e14((char)param_2[0x19f]);
  iVar2 = FUN_ram_00155e14((char)param_2[0x19f]);
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (undefined1 *)FUN_ram_000e2000(*(undefined4 *)(iVar2 + 0x14));
  }
  *puVar3 = 8;
  puVar3[1] = 1;
  FUN_ram_00157328(iVar1,param_2);
  FUN_ram_00156f0c(iVar1,1,0,2);
  FUN_ram_00156f0c(iVar1 + 8,1,0,2);
  FUN_ram_00156738(iVar1 + 99,1,*(undefined1 *)(*param_2 + 0x2c),2);
  FUN_ram_00156738(iVar1 + 0x76,1,*puVar8,2);
  FUN_ram_00156738(iVar1 + 0x68,2,(short)param_2[3],2);
  FUN_ram_80025e54(iVar1 + 100,param_2[0xe3],2);
  param_2[0xe4] = param_2[0xe3];
  FUN_ram_00156738(iVar1 + 0x80,1,*(undefined1 *)((int)param_2 + 0x65),2);
  FUN_ram_00156738(iVar1 + 0x79,1,1,2);
  FUN_ram_00156738(iVar1 + 0x7c,1,*(undefined1 *)((int)param_2 + 0x73),2);
  FUN_ram_001573e0(param_2);
  FUN_ram_00157594(param_2);
  iVar2 = iVar1 + 0x5c;
  if (*(char *)(*param_2 + 0x2c) == '\x02') {
    uVar6 = 6;
    local_24 = DAT_ram_001aa5a8;
    local_20 = DAT_ram_001aa5ac;
  }
  else {
    FUN_ram_001567ec(iVar2,piVar7 + 0x27,6);
    piVar4 = piVar7 + 0x19f;
    iVar2 = DAT_ram_0018c274 + 8 + uVar10;
    uVar6 = 1;
  }
  FUN_ram_001567ec(iVar2,piVar4,uVar6);
  FUN_ram_001567ec(iVar1 + 0x70,(int)param_1 + 0x1f,6);
  uVar9 = (int)param_2 + 0x96;
  FUN_ram_001567ec(iVar1 + 0x6a,uVar9,6);
  if (((uint)(param_2 + 0x27) & 1) == 0 && (uVar9 & 1) == 0) {
    if (((*(short *)((int)param_2 + 0x9a) == (short)param_2[0x28]) &&
        ((short)param_2[0x26] == *(short *)((int)param_2 + 0x9e))) &&
       (*(short *)((int)param_2 + 0x96) == (short)param_2[0x27])) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    uVar9 = FUN_ram_000eeb74(param_2 + 0x27,uVar9,6);
    iVar2 = 1 - uVar9;
    if (1 < uVar9) {
      iVar2 = 0;
    }
  }
  FUN_ram_00156738(iVar1 + 0x62,1,iVar2,2);
  FUN_ram_00156738(iVar1 + 0x7f,1,uVar10,2);
  FUN_ram_00156738(iVar1 + 0xb8,2,*(undefined2 *)((int)param_2 + 0x422),2);
  if (((*(char *)((int)param_2 + 0x96) == -1) && (*(char *)((int)param_2 + 0x97) == -1)) &&
     (((char)param_2[0x26] == -1 &&
      ((*(char *)((int)param_2 + 0x99) == -1 && (*(char *)((int)param_2 + 0x9a) != -1)))))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  FUN_ram_00156738(iVar1 + 0x81,1,uVar5,2);
  if (**(ushort **)*param_2 < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(ushort **)*param_2 - 2;
  }
  FUN_ram_00156738(iVar1 + 0x84,1,iVar2,2);
  if ((*(char *)(*param_2 + 0x2c) == '\x01') && ((*(byte *)(param_2 + 0x19) & 1) == 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  FUN_ram_00156738(iVar1 + 0x85,1,uVar6,2);
  FUN_ram_0015762c(param_2);
  FUN_ram_00157688(param_2);
  if (piVar7 == param_2) {
    DAT_ram_0018c128 = 0x40;
    local_24 = 0x40;
    FUN_ram_001567ec(DAT_ram_0018c274 + 0x10,&local_24,4);
  }
  *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  FUN_ram_001576e4(param_2);
  return;
}


