
/* ==== __break @ 00450aed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450aed-00450aed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


