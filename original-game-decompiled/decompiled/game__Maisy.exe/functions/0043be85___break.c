
/* ==== __break @ 0043be85 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043be85-0043be85
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


