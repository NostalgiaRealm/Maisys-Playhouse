
/* ==== __break @ 0043c226 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c226-0043c226
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


