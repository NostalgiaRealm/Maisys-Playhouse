
/* ==== __break @ 00450ae3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450ae3-00450ae3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


