
/* ==== __break @ 00497f38 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497f38-00497f38
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


