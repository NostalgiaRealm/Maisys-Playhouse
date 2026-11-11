
/* ==== __break @ 0043602b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043602b-0043602b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


