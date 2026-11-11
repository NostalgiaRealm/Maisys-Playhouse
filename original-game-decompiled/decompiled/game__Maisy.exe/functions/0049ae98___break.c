
/* ==== __break @ 0049ae98 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae98-0049ae98
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


