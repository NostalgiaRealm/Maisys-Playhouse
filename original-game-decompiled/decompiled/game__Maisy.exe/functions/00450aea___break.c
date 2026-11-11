
/* ==== __break @ 00450aea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450aea-00450aea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


