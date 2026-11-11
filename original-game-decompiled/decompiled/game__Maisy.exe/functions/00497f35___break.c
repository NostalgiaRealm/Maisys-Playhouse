
/* ==== __break @ 00497f35 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497f35-00497f35
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


