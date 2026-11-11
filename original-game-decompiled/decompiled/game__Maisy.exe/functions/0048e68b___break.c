
/* ==== __break @ 0048e68b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e68b-0048e68b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


