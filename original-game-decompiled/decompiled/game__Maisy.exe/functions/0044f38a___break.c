
/* ==== __break @ 0044f38a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044f38a-0044f38a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


