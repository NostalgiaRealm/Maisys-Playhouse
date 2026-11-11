
/* ==== __break @ 00450973 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450973-00450973
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


