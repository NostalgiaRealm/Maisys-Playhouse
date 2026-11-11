
/* ==== __break @ 0048a33a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a33a-0048a33a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


