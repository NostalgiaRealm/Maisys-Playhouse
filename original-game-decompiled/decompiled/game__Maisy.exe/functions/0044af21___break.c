
/* ==== __break @ 0044af21 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044af21-0044af21
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


