
/* ==== __break @ 00497f36 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497f36-00497f36
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


