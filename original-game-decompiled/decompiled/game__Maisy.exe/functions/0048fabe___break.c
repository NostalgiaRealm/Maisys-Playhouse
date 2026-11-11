
/* ==== __break @ 0048fabe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fabe-0048fabe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


