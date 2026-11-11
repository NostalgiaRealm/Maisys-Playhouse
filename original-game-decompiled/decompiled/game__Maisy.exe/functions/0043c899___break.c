
/* ==== __break @ 0043c899 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c899-0043c899
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


