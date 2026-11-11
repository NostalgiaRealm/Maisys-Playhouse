
/* ==== __break @ 0048e39b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e39b-0048e39b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


