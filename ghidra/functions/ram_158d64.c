/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158d64 */

void FUN_ram_00158d64(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
                     ushort param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
                     undefined4 param_10,int param_11,ushort param_12,undefined2 param_13,
                     undefined1 param_14,undefined4 param_15,int param_16)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [56];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [28];
  undefined2 local_48;
  ushort local_46;
  undefined2 local_44;
  ushort local_42;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  char local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  
  iVar1 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar1 != 0 && param_2 != 0) && (*(char *)(param_1 + 0x4e5) != '\0')) {
    FUN_ram_000eea80(auStack_d0,0,0x9c);
    FUN_ram_0039fe00(auStack_d0,param_3,0x20);
    FUN_ram_0039fe00(auStack_b0,param_4,8);
    if (param_5 != 0) {
      FUN_ram_0039fe00(auStack_a8,param_5,0x38);
    }
    if ((param_3[1] & 0x8000) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_ram_00158c94(param_1,*param_3);
      if (param_16 != 0) {
        iVar2 = iVar2 + ((uint)(param_16 * iVar2) >> 0x10);
      }
    }
    local_44 = (undefined2)iVar2;
    if ((DAT_ram_0018c256 < param_12) ||
       ((*(char *)(iVar3 + 0x1e) == '\x01' &&
        ((iVar3 = FUN_ram_0012dbb4(), (int)(uint)DAT_ram_0018c254 <= iVar3 ||
         ((DAT_ram_0018c258 != '\0' && (DAT_ram_0018c10c != 0)))))))) {
      param_6 = param_6 | 0x10;
    }
    local_6c = param_9;
    local_68 = param_10;
    local_70 = param_8;
    local_42 = param_6;
    local_40 = param_7;
    if (param_11 != 0) {
      FUN_ram_0039fe00(auStack_64,param_11,0x1c);
    }
    local_48 = param_13;
    local_3d = param_14;
    local_3b = FUN_ram_0011bca8(param_1);
    local_46 = param_12;
    if ((param_6 & 0x40) == 0) {
      if (*(char *)(param_1 + 0x4e8) == '\x03') {
        local_3e = *(undefined1 *)(param_1 + 0x4ea);
        if (((*(int *)(param_1 + 0xd28) != 0) && (*(char *)(param_1 + 0x4eb) != '\0')) &&
           (DAT_ram_0018c114 == 1)) {
          local_3f = 2;
        }
      }
      else {
        local_3e = 7;
      }
    }
    else {
      local_3e = 1;
      local_3f = 2;
    }
    local_3c = *(char *)(param_1 + 0x4e4);
    if (local_3c == '\0') {
      local_3c = '@';
    }
    local_38 = param_15;
    FUN_ram_001567ec(param_2 + 4,auStack_d0,0x9c);
    FUN_ram_80025e54(iVar1 + 0xb0,0,2);
    if ((param_6 & 0x40) == 0) {
      FUN_ram_80025e54(iVar1 + 0x10,2,2);
      DAT_ram_800379a8 = DAT_ram_800379a8 + 1;
    }
    else {
      FUN_ram_80025e54(param_2 + 0x2c,2,2);
      DAT_ram_800379a4 = DAT_ram_800379a4 + 1;
    }
  }
  return;
}


