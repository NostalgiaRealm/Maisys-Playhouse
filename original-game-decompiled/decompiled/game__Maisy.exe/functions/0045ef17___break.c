
/* ==== __break @ 0045ef17 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ef17-0045ef17
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


