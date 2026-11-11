
/* ==== __break @ 0048e1ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e1ae-0048e1ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


