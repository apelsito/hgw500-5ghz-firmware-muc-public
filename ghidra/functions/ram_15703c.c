/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015703c */

undefined4 FUN_ram_0015703c(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 uStack_3d;
  undefined4 local_3c;
  undefined2 local_38;
  
  local_44 = DAT_ram_001aa5a0;
  local_40 = DAT_ram_001aa5a4;
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined1 *)(param_1 + 0x7d);
  }
  if (param_3 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
  }
  iVar3 = FUN_ram_001563ac(uVar2,param_2,0,0,1);
  if (iVar3 == 0) {
LAB_ram_001570cc:
    FUN_ram_000ee260(s_node_0x_x_failed_to_allocate_on_A_ram_001c7490,param_2);
    iVar3 = 6;
    uVar6 = 6;
    local_3c = DAT_ram_001aa588;
    local_38 = DAT_ram_001aa58c;
    do {
      FUN_ram_001563ac(7,param_2,(&uStack_3d)[uVar6],0,1);
      iVar3 = iVar3 + -1;
      uVar6 = uVar6 - 1 & 0xff;
    } while (iVar3 != 0);
    FUN_ram_001563ac(4,param_2,0,0,1);
    uVar2 = 0;
  }
  else {
    iVar3 = 6;
    uVar6 = 0;
    do {
      cVar1 = *(char *)((int)&local_44 + uVar6);
      if (param_3 == 0) {
        if (cVar1 == '\a') goto LAB_ram_00157148;
        if (cVar1 == '\x04') goto LAB_ram_00157174;
        uVar2 = 6;
        uVar5 = 0x400;
      }
      else {
        uVar2 = 5;
        if (cVar1 == '\a') {
LAB_ram_00157148:
          uVar2 = 5;
          uVar5 = 0x20;
        }
        else {
          uVar5 = 0x40;
          if (cVar1 == '\x04') {
LAB_ram_00157174:
            uVar2 = 5;
            uVar5 = 0x10;
          }
        }
      }
      iVar4 = FUN_ram_001563ac(uVar2,param_2,cVar1,uVar5,1);
      if (iVar4 == 0) goto LAB_ram_001570cc;
      iVar4 = FUN_ram_00155e44(param_2,cVar1);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else if (cVar1 == '\x05') {
        uVar2 = 2;
      }
      else if ((cVar1 == '\x06' || cVar1 == '\x04') || (cVar1 == '\a')) {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
      }
      uVar5 = FUN_ram_00156ea0(param_2,cVar1,uVar7,&local_3e);
      FUN_ram_00156f44(param_2,cVar1,uVar2,uVar5,local_3e);
      FUN_ram_00156738(iVar4 + 0x87,1,param_3 != 0,2);
      uVar2 = FUN_ram_00148358(param_2,cVar1);
      FUN_ram_80025e54(iVar4 + 0xd0,uVar2,2);
      iVar3 = iVar3 + -1;
      uVar6 = uVar6 + 1 & 0xff;
    } while (iVar3 != 0);
    uVar2 = 1;
  }
  return uVar2;
}


