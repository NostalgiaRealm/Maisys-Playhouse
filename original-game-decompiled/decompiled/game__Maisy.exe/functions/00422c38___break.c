
/* ==== __break @ 00422c38 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00422c38-00422c38
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


