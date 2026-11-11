
/* ==== __break @ 0043c234 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c234-0043c234
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


