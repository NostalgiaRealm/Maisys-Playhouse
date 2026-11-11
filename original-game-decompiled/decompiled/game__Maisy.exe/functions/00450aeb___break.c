
/* ==== __break @ 00450aeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450aeb-00450aeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


