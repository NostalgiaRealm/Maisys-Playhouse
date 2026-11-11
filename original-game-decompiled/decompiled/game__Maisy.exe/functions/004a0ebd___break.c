
/* ==== __break @ 004a0ebd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0ebd-004a0ebd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


