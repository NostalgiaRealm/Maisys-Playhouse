
/* ==== __break @ 004a094b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a094b-004a094b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


