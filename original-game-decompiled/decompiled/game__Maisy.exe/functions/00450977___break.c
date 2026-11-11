
/* ==== __break @ 00450977 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450977-00450977
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


