
/* ==== __break @ 1400d2ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2ee-1400d2ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


