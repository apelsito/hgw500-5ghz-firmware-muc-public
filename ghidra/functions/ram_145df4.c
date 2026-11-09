/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00145df4 */

void FUN_ram_00145df4(void)

{
  FUN_ram_00145c1c(&DAT_ram_0018d47c,1,s_11ac_4ss_ram_001c57e0,0);
  FUN_ram_00145c1c(&DAT_ram_0018e22c,1,s_11ac_3ss_ram_001c57ec,0);
  FUN_ram_00145c1c(&DAT_ram_0018e904,1,s_11ac_2ss_ram_001c57f8,0);
  FUN_ram_00145c1c(&DAT_ram_0018efdc,1,s_11ac_1ss_ram_001c5804,0);
  FUN_ram_00145c1c(&DAT_ram_0018e904,1,s_11ac_2ss_ram_001c57f8,1);
  FUN_ram_00145c1c(&DAT_ram_0018efdc,1,s_11ac_1ss_ram_001c5804,1);
  FUN_ram_00145c1c(&DAT_ram_0018f9d8,0,s_11n_4ss_ram_001c5810,0);
  FUN_ram_00145c1c(&DAT_ram_00190788,0,s_11n_3ss_ram_001c5818,0);
  FUN_ram_00145c1c(&DAT_ram_00191538,0,s_11n_2ss_ram_001c5820,0);
  FUN_ram_00145c1c(&DAT_ram_001922e8,0,s_11n_1ss_ram_001c5828,0);
  FUN_ram_00145c1c(&DAT_ram_001900b0,0,s_11n_4ss_eqm_ram_001c5830,0);
  FUN_ram_00145c1c(&DAT_ram_00190e60,0,s_11n_3ss_eqm_ram_001c583c,0);
  FUN_ram_00145c1c(&DAT_ram_00191c10,0,s_11n_2ss_eqm_ram_001c5848,0);
  return;
}


