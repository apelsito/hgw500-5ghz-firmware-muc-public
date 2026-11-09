/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015b10c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0015b10c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_ram_8002c9d4;
  DAT_ram_8002c9d8 = 0;
  DAT_ram_8002c9f0 = 0;
  DAT_ram_8002c9ec = 0;
  DAT_ram_8002ca64 = 0;
  DAT_ram_8002ca14 = 0;
  DAT_ram_8002ca6c = 0;
  DAT_ram_8002ca18 = DAT_ram_0018cd50;
  DAT_ram_8002ca1c = DAT_ram_0018cd54;
  DAT_ram_8002ca20 = DAT_ram_0018cd58;
  DAT_ram_8002ca24 = DAT_ram_0018cd5c;
  DAT_ram_8002ca28 = DAT_ram_0018cd60;
  DAT_ram_8002ca2c = DAT_ram_0018cd64;
  DAT_ram_8002ca30 = DAT_ram_0018cd68;
  DAT_ram_8002ca34 = DAT_ram_0018cd6c;
  DAT_ram_8002ca38 = DAT_ram_0018cd70;
  DAT_ram_8002ca3c = DAT_ram_0018cd74;
  DAT_ram_8002ca40 = DAT_ram_0018cd78;
  DAT_ram_8002ca44 = DAT_ram_0018cd7c;
  DAT_ram_8002ca48 = DAT_ram_0018cd80;
  DAT_ram_8002ca4c = DAT_ram_0018cd84;
  DAT_ram_8002ca50 = DAT_ram_0018cd88;
  DAT_ram_8002ca68 = DAT_ram_0018c1c4;
  if (param_1 == DAT_ram_8002c9d4) {
    DAT_ram_8002c9d8 = 0;
    DAT_ram_8002c9ec = 0;
    DAT_ram_8002c9f0 = 0;
    DAT_ram_8002ca14 = 0;
    DAT_ram_8002ca18 = DAT_ram_0018cd50;
    DAT_ram_8002ca1c = DAT_ram_0018cd54;
    DAT_ram_8002ca20 = DAT_ram_0018cd58;
    DAT_ram_8002ca24 = DAT_ram_0018cd5c;
    DAT_ram_8002ca28 = DAT_ram_0018cd60;
    DAT_ram_8002ca2c = DAT_ram_0018cd64;
    DAT_ram_8002ca30 = DAT_ram_0018cd68;
    DAT_ram_8002ca34 = DAT_ram_0018cd6c;
    DAT_ram_8002ca38 = DAT_ram_0018cd70;
    DAT_ram_8002ca3c = DAT_ram_0018cd74;
    DAT_ram_8002ca40 = DAT_ram_0018cd78;
    DAT_ram_8002ca44 = DAT_ram_0018cd7c;
    DAT_ram_8002ca48 = DAT_ram_0018cd80;
    DAT_ram_8002ca4c = DAT_ram_0018cd84;
    DAT_ram_8002ca50 = DAT_ram_0018cd88;
    DAT_ram_8002ca64 = 0;
    DAT_ram_8002ca68 = DAT_ram_0018c1c4;
    DAT_ram_8002ca6c = 0;
    return;
  }
  if ((DAT_ram_8002c91c & 2) == 0) {
    if (param_1 == 1) goto LAB_ram_0015b204;
    if (param_1 != 2) {
      DAT_ram_8002c9d4 = param_1;
      DAT_ram_8002c9d8 = 0;
      DAT_ram_8002c9ec = 0;
      DAT_ram_8002c9f0 = 0;
      DAT_ram_8002ca14 = 0;
      DAT_ram_8002ca18 = DAT_ram_0018cd50;
      DAT_ram_8002ca1c = DAT_ram_0018cd54;
      DAT_ram_8002ca20 = DAT_ram_0018cd58;
      DAT_ram_8002ca24 = DAT_ram_0018cd5c;
      DAT_ram_8002ca28 = DAT_ram_0018cd60;
      DAT_ram_8002ca2c = DAT_ram_0018cd64;
      DAT_ram_8002ca30 = DAT_ram_0018cd68;
      DAT_ram_8002ca34 = DAT_ram_0018cd6c;
      DAT_ram_8002ca38 = DAT_ram_0018cd70;
      DAT_ram_8002ca3c = DAT_ram_0018cd74;
      DAT_ram_8002ca40 = DAT_ram_0018cd78;
      DAT_ram_8002ca44 = DAT_ram_0018cd7c;
      DAT_ram_8002ca48 = DAT_ram_0018cd80;
      DAT_ram_8002ca4c = DAT_ram_0018cd84;
      DAT_ram_8002ca50 = DAT_ram_0018cd88;
      DAT_ram_8002ca64 = 0;
      DAT_ram_8002ca68 = DAT_ram_0018c1c4;
      DAT_ram_8002ca6c = 0;
      return;
    }
    if (DAT_ram_8002c9d4 != 1) {
      DAT_ram_8002c9d4 = param_1;
      DAT_ram_8002c9d8 = 0;
      DAT_ram_8002c9ec = 0;
      DAT_ram_8002c9f0 = 0;
      DAT_ram_8002ca14 = 0;
      DAT_ram_8002ca18 = DAT_ram_0018cd50;
      DAT_ram_8002ca1c = DAT_ram_0018cd54;
      DAT_ram_8002ca20 = DAT_ram_0018cd58;
      DAT_ram_8002ca24 = DAT_ram_0018cd5c;
      DAT_ram_8002ca28 = DAT_ram_0018cd60;
      DAT_ram_8002ca2c = DAT_ram_0018cd64;
      DAT_ram_8002ca30 = DAT_ram_0018cd68;
      DAT_ram_8002ca34 = DAT_ram_0018cd6c;
      DAT_ram_8002ca38 = DAT_ram_0018cd70;
      DAT_ram_8002ca3c = DAT_ram_0018cd74;
      DAT_ram_8002ca40 = DAT_ram_0018cd78;
      DAT_ram_8002ca44 = DAT_ram_0018cd7c;
      DAT_ram_8002ca48 = DAT_ram_0018cd80;
      DAT_ram_8002ca4c = DAT_ram_0018cd84;
      DAT_ram_8002ca50 = DAT_ram_0018cd88;
      DAT_ram_8002ca64 = 0;
      DAT_ram_8002ca68 = DAT_ram_0018c1c4;
      DAT_ram_8002ca6c = 0;
      return;
    }
  }
  else {
    FUN_ram_000ee260(s_AutoCCA__State_Transition___d____ram_001c78a4,DAT_ram_8002c9d4,param_1);
    if (param_1 == 1) {
LAB_ram_0015b204:
      if (DAT_ram_8002c9dc == 0) {
        DAT_ram_8002c9d4 = param_1;
        return;
      }
      _DAT_ram_e6090268 = DAT_ram_8002c9dc;
      if ((DAT_ram_8002c91c & 2) == 0) {
        DAT_ram_8002c9d4 = param_1;
        _DAT_ram_e6090268 = DAT_ram_8002c9dc;
        return;
      }
      FUN_ram_000ee260(s_AutoCCA__cca_th__reset_to_0x_08x_ram_001c78e8);
      DAT_ram_8002c9d4 = param_1;
      return;
    }
    if (param_1 != 2) {
      if ((DAT_ram_8002c91c & 2) == 0) {
        DAT_ram_8002c9d4 = param_1;
        return;
      }
      FUN_ram_000ee260(s_AutoCCA__Invalid_State___d_ram_001c78cc,param_1);
      DAT_ram_8002c9d4 = param_1;
      return;
    }
    if (iVar1 != 1) {
      if ((DAT_ram_8002c91c & 2) == 0) {
        DAT_ram_8002c9d4 = param_1;
        return;
      }
      FUN_ram_000ee260(s_AutoCCA__Invalid_State_Transitio_ram_001c790c);
      DAT_ram_8002c9d4 = param_1;
      return;
    }
  }
  DAT_ram_8002c9e0 = 0;
  DAT_ram_8002c9d4 = param_1;
  return;
}


