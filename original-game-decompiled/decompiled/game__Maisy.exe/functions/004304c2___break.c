
/* ==== __break @ 004304c2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304c2-004304c2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


