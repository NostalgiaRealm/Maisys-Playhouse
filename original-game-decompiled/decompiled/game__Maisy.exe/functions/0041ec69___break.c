
/* ==== __break @ 0041ec69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ec69-0041ec69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


