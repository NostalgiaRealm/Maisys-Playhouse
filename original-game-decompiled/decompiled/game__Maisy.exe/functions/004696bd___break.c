
/* ==== __break @ 004696bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004696bd-004696bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


