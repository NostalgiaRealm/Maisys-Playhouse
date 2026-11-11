
/* ==== __break @ 00417c5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417c5b-00417c5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


