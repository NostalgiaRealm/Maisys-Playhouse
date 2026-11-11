
/* ==== __break @ 0043c898 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c898-0043c898
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


