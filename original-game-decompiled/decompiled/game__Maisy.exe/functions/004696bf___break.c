
/* ==== __break @ 004696bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004696bf-004696bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


