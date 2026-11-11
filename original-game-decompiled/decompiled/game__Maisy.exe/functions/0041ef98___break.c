
/* ==== __break @ 0041ef98 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef98-0041ef98
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


