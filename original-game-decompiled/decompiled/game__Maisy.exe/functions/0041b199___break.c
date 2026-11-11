
/* ==== __break @ 0041b199 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041b199-0041b199
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


