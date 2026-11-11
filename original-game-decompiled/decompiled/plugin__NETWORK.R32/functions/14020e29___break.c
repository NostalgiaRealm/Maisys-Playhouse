
/* ==== __break @ 14020e29 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e29-14020e29
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


